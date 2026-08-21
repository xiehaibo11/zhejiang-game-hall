.class public Lcom/tkay/expressad/video/module/a/a/d;
.super Lcom/tkay/expressad/video/module/a/a/k;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/b/a;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V
    .locals 0

    .line 13
    invoke-direct/range {p0 .. p8}, Lcom/tkay/expressad/video/module/a/a/k;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/b/a;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/Object;)V
    .locals 2

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/k;->a(ILjava/lang/Object;)V

    .line 19
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/d;->W:Z

    if-eqz v0, :cond_2

    const/16 v0, 0x7a

    if-eq p1, v0, :cond_1

    const/4 v0, 0x1

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    .line 34
    :pswitch_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/a/a/d;->a(I)V

    return-void

    .line 27
    :pswitch_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/a/a/d;->X:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/video/module/a/a/d;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result p1

    const/4 v1, 0x5

    if-ne p1, v1, :cond_0

    .line 28
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/a/a/d;->a(Ljava/lang/String;)V

    .line 30
    :cond_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/a/a/d;->b(I)V

    .line 31
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/a/a/d;->a(I)V

    return-void

    :pswitch_2
    const/4 p1, 0x2

    .line 22
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/a/a/d;->b(I)V

    .line 23
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/a/a/d;->a(I)V

    return-void

    .line 68
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/d;->a()V

    :cond_2
    :goto_0
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x6d
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
