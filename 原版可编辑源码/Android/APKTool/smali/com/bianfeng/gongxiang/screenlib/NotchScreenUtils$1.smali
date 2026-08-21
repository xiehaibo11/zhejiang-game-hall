.class Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;
.super Ljava/lang/Object;
.source "NotchScreenUtils.java"

# interfaces
.implements Landroid/view/View$OnApplyWindowInsetsListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->setOnApplyWindowInsetsListener(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

.field final synthetic val$activity:Landroid/app/Activity;


# direct methods
.method constructor <init>(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;Landroid/app/Activity;)V
    .locals 0

    .line 61
    iput-object p1, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    iput-object p2, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;->val$activity:Landroid/app/Activity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onApplyWindowInsets(Landroid/view/View;Landroid/view/WindowInsets;)Landroid/view/WindowInsets;
    .locals 3

    const/4 p1, 0x0

    const-string v0, "ymnsdk "

    if-nez p2, :cond_0

    const-string v1, "setOnApplyWindowInsetsListener  windowInsets is null"

    .line 65
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 66
    iget-object v0, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    invoke-static {v0, p1}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->access$002(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;I)I

    return-object p2

    .line 69
    :cond_0
    invoke-virtual {p2}, Landroid/view/WindowInsets;->getDisplayCutout()Landroid/view/DisplayCutout;

    move-result-object v1

    if-nez v1, :cond_1

    .line 71
    iget-object v1, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    invoke-static {v1, p1}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->access$002(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;I)I

    const-string p1, "cutout==null, is not notch screen"

    .line 72
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 74
    :cond_1
    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getBoundingRects()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 75
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-nez v2, :cond_2

    goto :goto_1

    .line 79
    :cond_2
    iget-object p1, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    iget-object v2, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;->val$activity:Landroid/app/Activity;

    invoke-static {p1, v2}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->access$100(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;Landroid/app/Activity;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 80
    iget-object p1, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetLeft()I

    move-result v1

    invoke-static {p1, v1}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->access$002(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;I)I

    goto :goto_0

    .line 82
    :cond_3
    iget-object p1, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetTop()I

    move-result v1

    invoke-static {p1, v1}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->access$002(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;I)I

    .line 84
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u5f02\u5f62\u5c4f\uff1a"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    invoke-static {v1}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->access$000(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;)I

    move-result v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 76
    :cond_4
    :goto_1
    iget-object v1, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    invoke-static {v1, p1}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->access$002(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;I)I

    const-string p1, "rects==null || rects.size()==0, is not notch screen"

    .line 77
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_2
    return-object p2
.end method
