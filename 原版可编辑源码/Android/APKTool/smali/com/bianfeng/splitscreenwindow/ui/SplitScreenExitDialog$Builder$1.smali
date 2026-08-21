.class Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder$1;
.super Ljava/lang/Object;
.source "SplitScreenExitDialog.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->onClick()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;


# direct methods
.method constructor <init>(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;)V
    .locals 0

    .line 53
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 56
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->access$100(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;)Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;->dismiss()V

    .line 57
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object p1

    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;

    invoke-static {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->access$200(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;)Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->hideBar(Landroid/app/Activity;)V

    return-void
.end method
