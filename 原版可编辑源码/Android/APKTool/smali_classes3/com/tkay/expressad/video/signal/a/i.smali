.class public final Lcom/tkay/expressad/video/signal/a/i;
.super Lcom/tkay/expressad/video/signal/a/b;


# instance fields
.field private a:Landroid/app/Activity;

.field private d:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)V
    .locals 0

    .line 11
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/b;-><init>()V

    .line 12
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/i;->a:Landroid/app/Activity;

    .line 13
    iput-object p2, p0, Lcom/tkay/expressad/video/signal/a/i;->d:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    return-void
.end method


# virtual methods
.method public final click(ILjava/lang/String;)V
    .locals 1

    .line 34
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/b;->click(ILjava/lang/String;)V

    .line 35
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/i;->d:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_0

    .line 36
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->click(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final handlerH5Exception(ILjava/lang/String;)V
    .locals 1

    .line 26
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/b;->handlerH5Exception(ILjava/lang/String;)V

    .line 27
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/i;->d:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_0

    .line 28
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->handlerH5Exception(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 18
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/b;->reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V

    .line 19
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/i;->d:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_0

    .line 20
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
