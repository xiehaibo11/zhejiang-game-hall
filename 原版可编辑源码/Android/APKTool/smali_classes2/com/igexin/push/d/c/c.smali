.class public abstract Lcom/igexin/push/d/c/c;
.super Lcom/igexin/b/a/d/a;


# instance fields
.field public i:I

.field public j:B

.field public k:B


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/igexin/b/a/d/a;-><init>()V

    const/16 v0, 0xb

    iput-byte v0, p0, Lcom/igexin/push/d/c/c;->k:B

    return-void
.end method


# virtual methods
.method protected a(Ljava/lang/String;)I
    .locals 2

    const-string v0, "UTF-8"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const-string v0, "UTF-16"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 p1, 0x2

    return p1

    :cond_1
    const-string v0, "UTF-16BE"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/16 p1, 0x10

    return p1

    :cond_2
    const-string v0, "UTF-16LE"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    const/16 p1, 0x11

    return p1

    :cond_3
    const-string v0, "GBK"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    const/16 p1, 0x19

    return p1

    :cond_4
    const-string v0, "GB2312"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    const/16 p1, 0x1a

    return p1

    :cond_5
    const-string v0, "GB18030"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    const/16 p1, 0x1b

    return p1

    :cond_6
    const-string v0, "ISO-8859-1"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_7

    const/16 p1, 0x21

    return p1

    :cond_7
    return v1
.end method

.method protected a(B)Ljava/lang/String;
    .locals 2

    and-int/lit8 p1, p1, 0x3f

    const/4 v0, 0x1

    const-string v1, "UTF-8"

    if-eq p1, v0, :cond_4

    const/4 v0, 0x2

    if-eq p1, v0, :cond_3

    const/16 v0, 0x10

    if-eq p1, v0, :cond_2

    const/16 v0, 0x11

    if-eq p1, v0, :cond_1

    const/16 v0, 0x21

    if-eq p1, v0, :cond_0

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const-string v1, "GB18030"

    goto :goto_0

    :pswitch_1
    const-string v1, "GB2312"

    goto :goto_0

    :pswitch_2
    const-string v1, "GBK"

    goto :goto_0

    :cond_0
    const-string v1, "ISO-8859-1"

    goto :goto_0

    :cond_1
    const-string v1, "UTF-16LE"

    goto :goto_0

    :cond_2
    const-string v1, "UTF-16BE"

    goto :goto_0

    :cond_3
    const-string v1, "UTF-16"

    :cond_4
    :goto_0
    return-object v1

    nop

    :pswitch_data_0
    .packed-switch 0x19
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public abstract a([B)V
.end method

.method public b_()I
    .locals 1

    iget v0, p0, Lcom/igexin/push/d/c/c;->i:I

    return v0
.end method

.method public abstract c()[B
.end method
