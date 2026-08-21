.class public final Lcom/tkay/expressad/video/bt/module/b/f;
.super Lcom/tkay/expressad/video/bt/module/TYTempContainer$a$a;


# instance fields
.field private a:Lcom/tkay/expressad/video/bt/module/b/h;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/bt/module/b/h;)V
    .locals 0

    .line 8
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$a$a;-><init>()V

    .line 9
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/b/f;->a:Lcom/tkay/expressad/video/bt/module/b/h;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 13
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$a$a;->a(Ljava/lang/String;)V

    .line 14
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/f;->a:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v0, :cond_0

    .line 15
    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
