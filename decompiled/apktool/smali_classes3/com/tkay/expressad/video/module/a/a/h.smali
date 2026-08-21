.class public final Lcom/tkay/expressad/video/module/a/a/h;
.super Lcom/tkay/expressad/video/module/a/a/k;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/b/a;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V
    .locals 0

    .line 12
    invoke-direct/range {p0 .. p8}, Lcom/tkay/expressad/video/module/a/a/k;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/b/a;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 2

    const/16 v0, 0x64

    const/4 v1, 0x2

    if-eq p1, v0, :cond_7

    const/16 v0, 0x6d

    if-eq p1, v0, :cond_6

    const/16 v0, 0x7a

    if-eq p1, v0, :cond_5

    const/16 v0, 0x81

    if-eq p1, v0, :cond_4

    const/16 v0, 0x76

    const-string v1, ""

    if-eq p1, v0, :cond_2

    const/16 v0, 0x77

    if-eq p1, v0, :cond_0

    goto :goto_0

    :cond_0
    if-eqz p2, :cond_1

    .line 32
    instance-of v0, p2, Ljava/lang/String;

    if-eqz v0, :cond_1

    .line 33
    move-object v1, p2

    check-cast v1, Ljava/lang/String;

    :cond_1
    const/4 v0, 0x4

    .line 35
    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/video/module/a/a/h;->a(ILjava/lang/String;)V

    goto :goto_0

    :cond_2
    if-eqz p2, :cond_3

    .line 39
    instance-of v0, p2, Ljava/lang/String;

    if-eqz v0, :cond_3

    .line 40
    move-object v1, p2

    check-cast v1, Ljava/lang/String;

    :cond_3
    const/4 v0, 0x3

    .line 42
    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/video/module/a/a/h;->a(ILjava/lang/String;)V

    goto :goto_0

    .line 45
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/h;->X:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/h;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result v0

    if-ne v0, v1, :cond_8

    .line 46
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/h;->e()V

    .line 47
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/h;->d()V

    .line 48
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/h;->c()V

    const/4 v0, 0x1

    .line 49
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/a/a/h;->a(I)V

    goto :goto_0

    .line 28
    :cond_5
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/h;->a()V

    goto :goto_0

    .line 25
    :cond_6
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/a/a/h;->b(I)V

    goto :goto_0

    .line 19
    :cond_7
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/h;->e()V

    .line 20
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/h;->d()V

    .line 21
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/h;->c()V

    .line 22
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/a/a/h;->a(I)V

    .line 53
    :cond_8
    :goto_0
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/k;->a(ILjava/lang/Object;)V

    return-void
.end method
