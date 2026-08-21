.class Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;
.super Ljava/lang/Object;
.source "SplitScreenWindowManager.java"

# interfaces
.implements Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;


# direct methods
.method constructor <init>(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onPay(Ljava/lang/String;)V
    .locals 2

    .line 89
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$402(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;Z)Z

    .line 90
    invoke-static {}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->getInstance()Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->pay(Ljava/lang/String;)V

    return-void
.end method

.method public onRemove()V
    .locals 2

    .line 69
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$000(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 70
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v1, "\u6d4b\u8bd5\u5173\u95ed"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    .line 71
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->closeWindow()V

    :cond_0
    return-void
.end method

.method public showFenping(Lcom/bianfeng/splitscreenwindow/ShowType;)V
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$102(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;Lcom/bianfeng/splitscreenwindow/ShowType;)Lcom/bianfeng/splitscreenwindow/ShowType;

    .line 84
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$300(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)V

    return-void
.end method

.method public showNotityDailog()V
    .locals 2

    .line 95
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$502(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;Z)Z

    .line 96
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$600(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)V

    return-void
.end method

.method public showQuanping(Lcom/bianfeng/splitscreenwindow/ShowType;)V
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$102(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;Lcom/bianfeng/splitscreenwindow/ShowType;)Lcom/bianfeng/splitscreenwindow/ShowType;

    .line 78
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$200(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)V

    return-void
.end method
