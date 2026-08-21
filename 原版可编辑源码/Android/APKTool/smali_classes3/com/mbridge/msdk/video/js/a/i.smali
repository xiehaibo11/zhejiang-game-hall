.class public final Lcom/mbridge/msdk/video/js/a/i;
.super Lcom/mbridge/msdk/video/js/a/b;
.source "JSBTModule.java"


# instance fields
.field private a:Landroid/app/Activity;

.field private b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)V
    .locals 0

    .line 14
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/b;-><init>()V

    .line 15
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/i;->a:Landroid/app/Activity;

    .line 16
    iput-object p2, p0, Lcom/mbridge/msdk/video/js/a/i;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    return-void
.end method


# virtual methods
.method public final click(ILjava/lang/String;)V
    .locals 1

    .line 37
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/b;->click(ILjava/lang/String;)V

    .line 38
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/i;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_0

    .line 39
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->click(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final handlerH5Exception(ILjava/lang/String;)V
    .locals 1

    .line 29
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/b;->handlerH5Exception(ILjava/lang/String;)V

    .line 30
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/i;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_0

    .line 31
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->handlerH5Exception(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 21
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/b;->reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V

    .line 22
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/i;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_0

    .line 23
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
