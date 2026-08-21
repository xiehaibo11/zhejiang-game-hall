.class public abstract Lcom/igexin/push/extension/distribution/basic/f/d;
.super Lcom/igexin/b/a/d/a;


# instance fields
.field a:Ljava/lang/String;

.field b:[B

.field protected c:Z

.field protected d:Z

.field protected e:Z

.field public f:Z


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/b/a/d/a;-><init>()V

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/d;->a:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Exception;)V
    .locals 0

    return-void
.end method

.method public a([B)V
    .locals 2

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/f/d;->f:Z

    if-nez p1, :cond_0

    return-void

    :cond_0
    array-length v0, p1

    const/4 v1, 0x7

    if-ge v0, v1, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x5

    aget-byte v0, p1, v0

    const/16 v1, 0x6f

    if-ne v0, v1, :cond_2

    const/4 v0, 0x6

    aget-byte p1, p1, v0

    const/16 v0, 0x6b

    if-ne p1, v0, :cond_2

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/f/d;->f:Z

    :cond_2
    return-void
.end method

.method public b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/d;->a:Ljava/lang/String;

    return-object v0
.end method

.method public b([B)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/d;->b:[B

    return-void
.end method

.method public c()[B
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/d;->b:[B

    return-object v0
.end method

.method public d()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/f/d;->c:Z

    return v0
.end method

.method public e()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/f/d;->d:Z

    return v0
.end method
