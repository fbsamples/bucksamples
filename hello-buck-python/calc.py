from __future__ import division
from __future__ import print_function

import logging

logger = logging.getLogger(__name__)


def add(a, b):
    """Add two numbers."""
    return a+b


def divide(a, b):
    """"Divide two numbers. Throw exception if division by zero."""
    if b == 0:
        raise ZeroDivisionError()
    return a/b


def subtract(a, b):
    """Subtract two numbers"""
    return a-b


def multiply(a, b):
    """Multiply two numbers"""
    return a*b
