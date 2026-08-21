.class Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils$1;
.super Ljava/lang/Object;
.source "SplashViewUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->removeView(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;)V
    .locals 0

    .line 87
    iput-object p1, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 90
    iget-object v0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    invoke-static {v0}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->access$000(Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;)Landroid/widget/ImageView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 91
    iget-object v0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    invoke-static {v0}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->access$000(Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;)Landroid/widget/ImageView;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 93
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    invoke-static {v0}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->access$100(Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    invoke-static {v0}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->access$100(Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;)Landroid/graphics/Bitmap;

    move-result-object v0

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_1

    .line 94
    iget-object v0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    invoke-static {v0}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->access$100(Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;)Landroid/graphics/Bitmap;

    move-result-object v0

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->recycle()V

    .line 95
    iget-object v0, p0, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils$1;->this$0:Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->access$102(Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    .line 97
    :cond_1
    invoke-static {}, Ljava/lang/System;->gc()V

    return-void
.end method
