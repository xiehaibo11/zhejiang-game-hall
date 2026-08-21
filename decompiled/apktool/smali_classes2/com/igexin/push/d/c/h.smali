.class public Lcom/igexin/push/d/c/h;
.super Lcom/igexin/push/d/c/c;


# instance fields
.field public a:B

.field public b:B


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/igexin/push/d/c/c;-><init>()V

    const/16 v0, 0x61

    iput v0, p0, Lcom/igexin/push/d/c/h;->i:I

    return-void
.end method


# virtual methods
.method public a([B)V
    .locals 1

    const/4 v0, 0x0

    aget-byte v0, p1, v0

    iput-byte v0, p0, Lcom/igexin/push/d/c/h;->a:B

    const/4 v0, 0x1

    aget-byte p1, p1, v0

    iput-byte p1, p0, Lcom/igexin/push/d/c/h;->b:B

    return-void
.end method

.method public c()[B
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [B

    iget-byte v1, p0, Lcom/igexin/push/d/c/h;->a:B

    const/4 v2, 0x0

    aput-byte v1, v0, v2

    iget-byte v1, p0, Lcom/igexin/push/d/c/h;->b:B

    const/4 v2, 0x1

    aput-byte v1, v0, v2

    return-object v0
.end method
