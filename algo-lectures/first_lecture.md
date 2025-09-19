Оценки
Зачет - работа в семестре(контесты и теоры)
Экзамен


Задача
- Условие
- Алгоритм решения (иногда реализация)
- Докво корректности
- Ассимптотика - количество элементарных десйтвий

## Элементарные (атомарные) действия
- Арифметический операции с int double ...
- Сравнение
- Булевские операции | & >>
- Random access (обращение к a[i]) -- спорно, тк на практике операции не выпоняются за константу
- Условные конструкции (if else)

### RAM - random access machine


### Task 1:
Array a0 a1 ... an-1
find a min

```
int n; read(n);
int a[n]; read(a);
x = a[0];
for i = 1,2,...,n-1
    if (a[i] < x): x = a[i]
printf(x)
```
- O(n)
Count how many atomic operations did we do
- 2: n, read(n)
- n: a[n], read(a)
- 2: x=a[0]
- ...
We will always ignore constants and minor n's

Def 1: let f,h: N->N, then
1) f = O(g) if exists c,N that
all n >= N f(n) <= cg(n)
2) f = omega(g) if exists c > 0 and N:
all n>N f(n) >= C * g(n)
3) f = tetta(g) if f = O(g) and f = omega(g) that means:
exisis c1, c2 > 0 exists N that all n >= N c1 * g(n) <= f(n) <= c2 * g(n)

### f = O(g) - 
c = 7, N = 4
if n >= 4, so 6n + 4 <= 7n? 
f = tetta(g)

## Example
- f(n) = 5n
- g(n) = 1/2 n^2

Note: f = tetta(g) => g = tetta(f)?
- f = O(g) => g = omega(f) |_\ g = tetta(f)
- f = omega(g) => g = O(f) |-/

### Let f,g: N - > N
f = O(n) <=> exitst C: all n f(n) <= C*g(n)
### Prove: 
let f(n) <= C*g(n)
So that N = 1, etc

### Given: f(n) <= C*g(n) with n >= N
To find: f(n) <= c * g(n) for all n
#### let c = max(c, f(1)/g(1), ... , f(N)/g(N))
- c >= f(i)/g(i) for i <= N (=>) f(i) <= c * g(i) for i <= N 
- c >= C => f(n) <= c * g(n) for n >= N

## Task
array a0 <= ... <= an-1, for x find index (exists i that ai = x)
- assymptotic: ceil(log2(n+1)) = O(log(n))


## Binary search
- invariant (const): if x in array a_c:
- x = a[l] or a[l+1] ... a[r]
- x in [l, r)


```
if x > a[m]:
    -> [m, r)
else:
    -> [l, m)

```

```python
l = -1
r = n-1
while(r - l > 1):
    m = (r - l) // 2
    if a[m] < x:
        l = m
    else:
        r = m

print(x == a[r])
```
O(log(n)) and omega(log(n))

## Task
pref sums
- Given an array a0,a1, ... , an
- Find the sum from a[l] to a[r]
- p[i] = a[0] + ... + a[i]
- construct P so that P[i] = p[i]

```python
p[0] = a[0]
for i = 1 ... n-1:
    p[i] = p[i-1] + a[i]
#O(n), but with q requests it would be O(n + q)
```
### Define
Let f,g : N -> N
then f = O(g) if exists C exists N exists Q:
- 