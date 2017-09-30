**1. Clone wallet sources**

```
git clone https://github.com/manateecoin/cryptonotewallet.git
```

**2. Set symbolic link to coin sources at the same level as `src`. For example:**

```
ln -s ../cryptonote cryptonote
```

**3. Build**

```
mkdir build && cd build && cmake .. && make
```
