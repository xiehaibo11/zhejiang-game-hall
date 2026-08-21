.class public La/a/a/a/d$a;
.super Ljava/lang/Object;
.source "NotchScreenUtils.java"

# interfaces
.implements Landroid/view/View$OnApplyWindowInsetsListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = La/a/a/a/d;->d(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Landroid/app/Activity;

.field public final synthetic b:La/a/a/a/d;


# direct methods
.method public constructor <init>(La/a/a/a/d;Landroid/app/Activity;)V
    .locals 0

    .line 1
    iput-object p1, p0, La/a/a/a/d$a;->b:La/a/a/a/d;

    iput-object p2, p0, La/a/a/a/d$a;->a:Landroid/app/Activity;

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

    .line 1
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 2
    iget-object v0, p0, La/a/a/a/d$a;->b:La/a/a/a/d;

    invoke-static {v0, p1}, La/a/a/a/d;->a(La/a/a/a/d;I)I

    return-object p2

    .line 5
    :cond_0
    invoke-virtual {p2}, Landroid/view/WindowInsets;->getDisplayCutout()Landroid/view/DisplayCutout;

    move-result-object v1

    if-nez v1, :cond_1

    .line 7
    iget-object v1, p0, La/a/a/a/d$a;->b:La/a/a/a/d;

    invoke-static {v1, p1}, La/a/a/a/d;->a(La/a/a/a/d;I)I

    const-string p1, "cutout==null, is not notch screen"

    .line 8
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 10
    :cond_1
    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getBoundingRects()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 11
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-nez v2, :cond_2

    goto :goto_1

    .line 15
    :cond_2
    iget-object p1, p0, La/a/a/a/d$a;->b:La/a/a/a/d;

    iget-object v2, p0, La/a/a/a/d$a;->a:Landroid/app/Activity;

    invoke-static {p1, v2}, La/a/a/a/d;->a(La/a/a/a/d;Landroid/app/Activity;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 16
    iget-object p1, p0, La/a/a/a/d$a;->b:La/a/a/a/d;

    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetLeft()I

    move-result v1

    invoke-static {p1, v1}, La/a/a/a/d;->a(La/a/a/a/d;I)I

    goto :goto_0

    .line 18
    :cond_3
    iget-object p1, p0, La/a/a/a/d$a;->b:La/a/a/a/d;

    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetTop()I

    move-result v1

    invoke-static {p1, v1}, La/a/a/a/d;->a(La/a/a/a/d;I)I

    .line 20
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u5f02\u5f62\u5c4f\uff1a"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, La/a/a/a/d$a;->b:La/a/a/a/d;

    invoke-static {v1}, La/a/a/a/d;->a(La/a/a/a/d;)I

    move-result v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 21
    :cond_4
    :goto_1
    iget-object v1, p0, La/a/a/a/d$a;->b:La/a/a/a/d;

    invoke-static {v1, p1}, La/a/a/a/d;->a(La/a/a/a/d;I)I

    const-string p1, "rects==null || rects.size()==0, is not notch screen"

    .line 22
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_2
    return-object p2
.end method
