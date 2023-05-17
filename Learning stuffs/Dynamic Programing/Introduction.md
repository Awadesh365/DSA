# First Problem to Tackle

@Sample

```cpp
int Recr(int n)
{
    if (n <= 1)
        return n;

    return Recr(n - 1) + Recr(n - 2);
}
```
