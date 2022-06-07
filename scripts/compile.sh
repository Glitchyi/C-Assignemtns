#!/bin/bash
gcc $1 -o "out$1"
./"out$1"
rm "out$1"
