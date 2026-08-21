.class public Lcom/mbridge/msdk/video/module/a/a/h;
.super Lcom/mbridge/msdk/video/module/a/a/e;
.source "ProxyOnNotifyListener.java"


# instance fields
.field protected b:Lcom/mbridge/msdk/video/module/a/a;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/video/module/a/a;)V
    .locals 0

    .line 14
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/a/a/e;-><init>()V

    .line 15
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/h;->b:Lcom/mbridge/msdk/video/module/a/a;

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/Object;)V
    .locals 1

    .line 20
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a/e;->a(ILjava/lang/Object;)V

    .line 21
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/h;->b:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_0

    .line 22
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method
