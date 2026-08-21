.class public interface abstract Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/utils/AdLifecycleManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "LifecycleListener"
.end annotation


# virtual methods
.method public abstract onCreate(Landroid/app/Activity;)V
.end method

.method public abstract onDestroy(Landroid/app/Activity;)V
.end method

.method public abstract onPause(Landroid/app/Activity;)V
.end method

.method public abstract onResume(Landroid/app/Activity;)V
.end method

.method public abstract onStart(Landroid/app/Activity;)V
.end method

.method public abstract onStop(Landroid/app/Activity;)V
.end method
