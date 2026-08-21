.class public final Lcom/mbridge/msdk/widget/custom/baseview/f;
.super Ljava/lang/Object;
.source "StrokeGradientDrawable.java"


# instance fields
.field private a:I

.field private b:I

.field private c:Landroid/graphics/drawable/GradientDrawable;


# direct methods
.method public constructor <init>(Landroid/graphics/drawable/GradientDrawable;)V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 13
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/f;->c:Landroid/graphics/drawable/GradientDrawable;

    return-void
.end method


# virtual methods
.method public final a()Landroid/graphics/drawable/GradientDrawable;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/f;->c:Landroid/graphics/drawable/GradientDrawable;

    return-object v0
.end method

.method public final a(I)V
    .locals 2

    .line 21
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/f;->a:I

    .line 22
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/f;->c:Landroid/graphics/drawable/GradientDrawable;

    .line 1026
    iget v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/f;->b:I

    .line 22
    invoke-virtual {v0, p1, v1}, Landroid/graphics/drawable/GradientDrawable;->setStroke(II)V

    return-void
.end method

.method public final b(I)V
    .locals 2

    .line 30
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/f;->b:I

    .line 31
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/f;->c:Landroid/graphics/drawable/GradientDrawable;

    .line 2017
    iget v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/f;->a:I

    .line 31
    invoke-virtual {v0, v1, p1}, Landroid/graphics/drawable/GradientDrawable;->setStroke(II)V

    return-void
.end method
