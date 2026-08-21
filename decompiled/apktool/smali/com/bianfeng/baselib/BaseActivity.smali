.class public Lcom/bianfeng/baselib/BaseActivity;
.super Landroid/app/Activity;
.source "BaseActivity.java"


# instance fields
.field private version:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 6
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const-string v0, "1.0.0"

    .line 15
    iput-object v0, p0, Lcom/bianfeng/baselib/BaseActivity;->version:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1

    const/4 v0, 0x4

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    return p1

    .line 12
    :cond_0
    invoke-super {p0, p1, p2}, Landroid/app/Activity;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method
