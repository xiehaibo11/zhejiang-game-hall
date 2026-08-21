.class public Lcom/github/lzyzsd/jsbridge/DefaultHandler;
.super Ljava/lang/Object;
.source "DefaultHandler.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# instance fields
.field TAG:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "DefaultHandler"

    .line 5
    iput-object v0, p0, Lcom/github/lzyzsd/jsbridge/DefaultHandler;->TAG:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 0

    if-eqz p2, :cond_0

    const-string p1, "DefaultHandler response data"

    .line 10
    invoke-interface {p2, p1}, Lcom/github/lzyzsd/jsbridge/CallBackFunction;->onCallBack(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
