.class public abstract Lcom/mbridge/msdk/mbjscommon/windvane/j;
.super Ljava/lang/Object;
.source "WindVanePlugin.java"


# instance fields
.field protected mContext:Landroid/content/Context;

.field protected mWebView:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field protected object:Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public initialize(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/j;->mContext:Landroid/content/Context;

    .line 20
    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/j;->mWebView:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    return-void
.end method

.method public initialize(Ljava/lang/Object;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 24
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/j;->object:Ljava/lang/Object;

    .line 25
    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/j;->mWebView:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    return-void
.end method
