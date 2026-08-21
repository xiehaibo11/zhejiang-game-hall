.class public La/a/a/a/f$a;
.super Ljava/lang/Object;
.source "SplashViewUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = La/a/a/a/f;->a(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:La/a/a/a/f;


# direct methods
.method public constructor <init>(La/a/a/a/f;)V
    .locals 0

    .line 1
    iput-object p1, p0, La/a/a/a/f$a;->a:La/a/a/a/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    iget-object v0, p0, La/a/a/a/f$a;->a:La/a/a/a/f;

    invoke-static {v0}, La/a/a/a/f;->a(La/a/a/a/f;)Landroid/widget/ImageView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, La/a/a/a/f$a;->a:La/a/a/a/f;

    invoke-static {v0}, La/a/a/a/f;->a(La/a/a/a/f;)Landroid/widget/ImageView;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method
