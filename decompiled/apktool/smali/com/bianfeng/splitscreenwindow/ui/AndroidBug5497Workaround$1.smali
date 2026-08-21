.class Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround$1;
.super Ljava/lang/Object;
.source "AndroidBug5497Workaround.java"

# interfaces
.implements Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;-><init>(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;

.field final synthetic val$activity:Landroid/app/Activity;


# direct methods
.method constructor <init>(Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;Landroid/app/Activity;)V
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;

    iput-object p2, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround$1;->val$activity:Landroid/app/Activity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onGlobalLayout()V
    .locals 2

    .line 36
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround$1;->val$activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->hideBar(Landroid/app/Activity;)V

    .line 38
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;

    invoke-static {v0}, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->access$000(Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;)V

    return-void
.end method
