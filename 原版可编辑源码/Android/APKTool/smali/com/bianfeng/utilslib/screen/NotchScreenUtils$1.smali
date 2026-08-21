.class Lcom/bianfeng/utilslib/screen/NotchScreenUtils$1;
.super Ljava/lang/Object;
.source "NotchScreenUtils.java"

# interfaces
.implements Landroid/view/View$OnApplyWindowInsetsListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->setOnApplyWindowInsetsListener(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/utilslib/screen/NotchScreenUtils;)V
    .locals 0

    .line 53
    iput-object p1, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils$1;->this$0:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onApplyWindowInsets(Landroid/view/View;Landroid/view/WindowInsets;)Landroid/view/WindowInsets;
    .locals 2

    const/4 p1, 0x0

    if-nez p2, :cond_0

    .line 57
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v1, "setOnApplyWindowInsetsListener  windowInsets is null"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 58
    iget-object v0, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils$1;->this$0:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    invoke-static {v0, p1}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->access$002(Lcom/bianfeng/utilslib/screen/NotchScreenUtils;I)I

    return-object p2

    .line 61
    :cond_0
    invoke-virtual {p2}, Landroid/view/WindowInsets;->getDisplayCutout()Landroid/view/DisplayCutout;

    move-result-object v0

    if-nez v0, :cond_1

    .line 63
    iget-object v0, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils$1;->this$0:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    invoke-static {v0, p1}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->access$002(Lcom/bianfeng/utilslib/screen/NotchScreenUtils;I)I

    .line 64
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string v0, "cutout==null, is not notch screen"

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    goto :goto_1

    .line 66
    :cond_1
    invoke-virtual {v0}, Landroid/view/DisplayCutout;->getBoundingRects()Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 67
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_2

    goto :goto_0

    .line 71
    :cond_2
    iget-object p1, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils$1;->this$0:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    invoke-virtual {v0}, Landroid/view/DisplayCutout;->getSafeInsetLeft()I

    move-result v1

    invoke-static {p1, v1}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->access$002(Lcom/bianfeng/utilslib/screen/NotchScreenUtils;I)I

    .line 72
    iget-object p1, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils$1;->this$0:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->access$000(Lcom/bianfeng/utilslib/screen/NotchScreenUtils;)I

    move-result p1

    if-nez p1, :cond_3

    .line 73
    iget-object p1, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils$1;->this$0:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    invoke-virtual {v0}, Landroid/view/DisplayCutout;->getSafeInsetTop()I

    move-result v0

    invoke-static {p1, v0}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->access$002(Lcom/bianfeng/utilslib/screen/NotchScreenUtils;I)I

    .line 75
    :cond_3
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u9ad8\u5ea6\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils$1;->this$0:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    invoke-static {v1}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->access$000(Lcom/bianfeng/utilslib/screen/NotchScreenUtils;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    goto :goto_1

    .line 68
    :cond_4
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils$1;->this$0:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    invoke-static {v0, p1}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->access$002(Lcom/bianfeng/utilslib/screen/NotchScreenUtils;I)I

    .line 69
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string v0, "rects==null || rects.size()==0, is not notch screen"

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    :goto_1
    return-object p2
.end method
