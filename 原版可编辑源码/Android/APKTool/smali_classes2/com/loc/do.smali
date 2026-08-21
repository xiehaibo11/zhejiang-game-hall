.class public final Lcom/loc/do;
.super Lcom/loc/gc;
.source "TMainCellCDMAHistory.java"


# direct methods
.method public static a(Lcom/loc/gb;IIIS)I
    .locals 1

    const/4 v0, 0x5

    invoke-virtual {p0, v0}, Lcom/loc/gb;->b(I)V

    invoke-static {p0, p3}, Lcom/loc/do;->c(Lcom/loc/gb;I)V

    invoke-static {p0, p2}, Lcom/loc/do;->b(Lcom/loc/gb;I)V

    invoke-static {p0, p1}, Lcom/loc/do;->a(Lcom/loc/gb;I)V

    invoke-static {p0, p4}, Lcom/loc/do;->a(Lcom/loc/gb;S)V

    invoke-static {p0}, Lcom/loc/do;->a(Lcom/loc/gb;)V

    invoke-static {p0}, Lcom/loc/do;->b(Lcom/loc/gb;)I

    move-result p0

    return p0
.end method

.method private static a(Lcom/loc/gb;)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x2

    invoke-virtual {p0, v0, v1}, Lcom/loc/gb;->a(IB)V

    return-void
.end method

.method private static a(Lcom/loc/gb;I)V
    .locals 1

    const/4 v0, 0x1

    invoke-virtual {p0, v0, p1}, Lcom/loc/gb;->a(II)V

    return-void
.end method

.method private static a(Lcom/loc/gb;S)V
    .locals 1

    const/4 v0, 0x4

    invoke-virtual {p0, v0, p1}, Lcom/loc/gb;->a(IS)V

    return-void
.end method

.method private static b(Lcom/loc/gb;)I
    .locals 0

    invoke-virtual {p0}, Lcom/loc/gb;->b()I

    move-result p0

    return p0
.end method

.method private static b(Lcom/loc/gb;I)V
    .locals 1

    const/4 v0, 0x2

    invoke-virtual {p0, v0, p1}, Lcom/loc/gb;->a(II)V

    return-void
.end method

.method private static c(Lcom/loc/gb;I)V
    .locals 1

    const/4 v0, 0x3

    invoke-virtual {p0, v0, p1}, Lcom/loc/gb;->a(II)V

    return-void
.end method
