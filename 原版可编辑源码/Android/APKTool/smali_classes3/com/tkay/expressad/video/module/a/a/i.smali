.class public Lcom/tkay/expressad/video/module/a/a/i;
.super Lcom/tkay/expressad/video/module/a/a/f;


# instance fields
.field protected V:Lcom/tkay/expressad/video/module/a/a;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/module/a/a;)V
    .locals 0

    .line 9
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/a/a/f;-><init>()V

    .line 10
    iput-object p1, p0, Lcom/tkay/expressad/video/module/a/a/i;->V:Lcom/tkay/expressad/video/module/a/a;

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/Object;)V
    .locals 1

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/f;->a(ILjava/lang/Object;)V

    .line 16
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/i;->V:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_0

    .line 17
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method
