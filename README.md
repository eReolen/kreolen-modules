# eReolen – kampagne

## Installation

Get the code:

```sh
git clone https://github.com/eReolen/base htdocs
cd htdocs
git clone https://github.com/eReolen/kreolen-modules sites/all/modules/kreol
git clone https://github.com/eReolen/kreolen-themes sites/all/themes/kreol
```

Apply patches:

```sh
for f in sites/all/modules/kreol/patches/*.patch; do
  patch --strip=1 < $f
done
```

## Updating

See [`scripts/update`](scripts/update)
