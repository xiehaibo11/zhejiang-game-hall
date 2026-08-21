.class public final Lcom/tkay/expressad/video/bt/module/b/d;
.super Lcom/tkay/expressad/video/bt/module/b/c;


# static fields
.field private static final a:Ljava/lang/String; = "H5ShowRewardListener"


# instance fields
.field private b:Lcom/tkay/expressad/video/bt/module/a/b;

.field private c:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/bt/module/a/b;Ljava/lang/String;)V
    .locals 0

    .line 13
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/b/c;-><init>()V

    .line 14
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/b/d;->b:Lcom/tkay/expressad/video/bt/module/a/b;

    .line 15
    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/b/d;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 20
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/d;->b:Lcom/tkay/expressad/video/bt/module/a/b;

    if-eqz v0, :cond_0

    .line 22
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/b/d;->c:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/bt/module/a/b;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 44
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/d;->b:Lcom/tkay/expressad/video/bt/module/a/b;

    if-eqz v0, :cond_0

    .line 46
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/b/d;->c:Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/video/bt/module/a/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 36
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/d;->b:Lcom/tkay/expressad/video/bt/module/a/b;

    if-eqz v0, :cond_0

    .line 38
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/b/d;->c:Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/video/bt/module/a/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(ZLcom/tkay/expressad/videocommon/c/c;)V
    .locals 2

    .line 28
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/d;->b:Lcom/tkay/expressad/video/bt/module/a/b;

    if-eqz v0, :cond_0

    .line 30
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/b/d;->c:Ljava/lang/String;

    invoke-interface {v0, v1, p1, p2}, Lcom/tkay/expressad/video/bt/module/a/b;->a(Ljava/lang/String;ZLcom/tkay/expressad/videocommon/c/c;)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 2

    .line 52
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/d;->b:Lcom/tkay/expressad/video/bt/module/a/b;

    if-eqz v0, :cond_0

    .line 54
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/b/d;->c:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/bt/module/a/b;->b(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 2

    .line 60
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/d;->b:Lcom/tkay/expressad/video/bt/module/a/b;

    if-eqz v0, :cond_0

    .line 62
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/b/d;->c:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/bt/module/a/b;->c(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
