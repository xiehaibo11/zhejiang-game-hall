.class public abstract Lcom/tkay/expressad/atsignalcommon/windvane/l;
.super Ljava/lang/Object;


# instance fields
.field protected e:Landroid/content/Context;

.field protected f:Ljava/lang/Object;

.field protected g:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public initialize(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 14
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/l;->e:Landroid/content/Context;

    .line 15
    iput-object p2, p0, Lcom/tkay/expressad/atsignalcommon/windvane/l;->g:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-void
.end method

.method public initialize(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/l;->f:Ljava/lang/Object;

    .line 20
    iput-object p2, p0, Lcom/tkay/expressad/atsignalcommon/windvane/l;->g:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-void
.end method
