.class Lcom/bianfeng/toponad/ui/TopOnBannerView$1;
.super Ljava/lang/Object;
.source "TopOnBannerView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/toponad/ui/TopOnBannerView;->closeAd()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/toponad/ui/TopOnBannerView;


# direct methods
.method constructor <init>(Lcom/bianfeng/toponad/ui/TopOnBannerView;)V
    .locals 0

    .line 145
    iput-object p1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView$1;->this$0:Lcom/bianfeng/toponad/ui/TopOnBannerView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 148
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView$1;->this$0:Lcom/bianfeng/toponad/ui/TopOnBannerView;

    invoke-static {v0}, Lcom/bianfeng/toponad/ui/TopOnBannerView;->access$100(Lcom/bianfeng/toponad/ui/TopOnBannerView;)Landroid/view/WindowManager;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView$1;->this$0:Lcom/bianfeng/toponad/ui/TopOnBannerView;

    invoke-static {v1}, Lcom/bianfeng/toponad/ui/TopOnBannerView;->access$000(Lcom/bianfeng/toponad/ui/TopOnBannerView;)Landroid/widget/LinearLayout;

    move-result-object v1

    invoke-interface {v0, v1}, Landroid/view/WindowManager;->removeView(Landroid/view/View;)V

    return-void
.end method
