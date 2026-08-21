.class Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$2;
.super Ljava/lang/Object;
.source "SplitScreenWindowManager.java"

# interfaces
.implements Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;


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

    .line 194
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$2;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public keyBoardHide(I)V
    .locals 1

    .line 208
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$2;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$700(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    .line 211
    :cond_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object p1

    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$2;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$800(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/ConfigurationUtils;->isLand(Landroid/app/Activity;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 212
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$2;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$000(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->updateViewY(I)V

    :cond_1
    return-void
.end method

.method public keyBoardShow(I)V
    .locals 2

    .line 197
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$2;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$700(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 198
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$2;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$702(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;Z)Z

    return-void

    .line 201
    :cond_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$2;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {v1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$800(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/ConfigurationUtils;->isLand(Landroid/app/Activity;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 202
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$2;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-static {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->access$000(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->updateViewY(I)V

    :cond_1
    return-void
.end method
