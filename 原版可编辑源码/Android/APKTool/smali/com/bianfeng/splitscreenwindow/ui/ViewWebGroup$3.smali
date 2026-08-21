.class Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$3;
.super Ljava/lang/Object;
.source "ViewWebGroup.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->registerHandler(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;


# direct methods
.method constructor <init>(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)V
    .locals 0

    .line 93
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$3;->this$0:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 0

    .line 96
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getYmnDatafun()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onClickWithH5(Ljava/lang/String;)V

    return-void
.end method
