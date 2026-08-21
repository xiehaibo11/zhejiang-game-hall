.class public final Lcom/loc/ds;
.super Lcom/loc/gc;
.source "TWifiInfo.java"


# direct methods
.method private static a(Lcom/loc/gb;)I
    .locals 0

    invoke-virtual {p0}, Lcom/loc/gb;->b()I

    move-result p0

    return p0
.end method

.method public static a(Lcom/loc/gb;ZJSISS)I
    .locals 1

    const/4 v0, 0x6

    invoke-virtual {p0, v0}, Lcom/loc/gb;->b(I)V

    invoke-static {p0, p2, p3}, Lcom/loc/ds;->a(Lcom/loc/gb;J)V

    invoke-static {p0, p5}, Lcom/loc/ds;->a(Lcom/loc/gb;I)V

    invoke-static {p0, p7}, Lcom/loc/ds;->c(Lcom/loc/gb;S)V

    invoke-static {p0, p6}, Lcom/loc/ds;->b(Lcom/loc/gb;S)V

    invoke-static {p0, p4}, Lcom/loc/ds;->a(Lcom/loc/gb;S)V

    invoke-static {p0, p1}, Lcom/loc/ds;->a(Lcom/loc/gb;Z)V

    invoke-static {p0}, Lcom/loc/ds;->a(Lcom/loc/gb;)I

    move-result p0

    return p0
.end method

.method private static a(Lcom/loc/gb;I)V
    .locals 1

    const/4 v0, 0x3

    invoke-virtual {p0, v0, p1}, Lcom/loc/gb;->b(II)V

    return-void
.end method

.method private static a(Lcom/loc/gb;J)V
    .locals 1

    const/4 v0, 0x1

    invoke-virtual {p0, v0, p1, p2}, Lcom/loc/gb;->a(IJ)V

    return-void
.end method

.method private static a(Lcom/loc/gb;S)V
    .locals 1

    const/4 v0, 0x2

    invoke-virtual {p0, v0, p1}, Lcom/loc/gb;->a(IS)V

    return-void
.end method

.method private static a(Lcom/loc/gb;Z)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/loc/gb;->a(Z)V

    return-void
.end method

.method private static b(Lcom/loc/gb;S)V
    .locals 1

    const/4 v0, 0x4

    invoke-virtual {p0, v0, p1}, Lcom/loc/gb;->a(IS)V

    return-void
.end method

.method private static c(Lcom/loc/gb;S)V
    .locals 1

    const/4 v0, 0x5

    invoke-virtual {p0, v0, p1}, Lcom/loc/gb;->a(IS)V

    return-void
.end method
