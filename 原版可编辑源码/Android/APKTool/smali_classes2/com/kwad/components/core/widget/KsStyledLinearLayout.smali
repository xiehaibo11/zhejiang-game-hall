.class public Lcom/kwad/components/core/widget/KsStyledLinearLayout;
.super Landroid/widget/LinearLayout;

# interfaces
.implements Lcom/kwad/components/core/widget/d;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/widget/e;)V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/KsStyledLinearLayout;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/components/core/t/g;->b(Lcom/kwad/components/core/widget/e;Landroid/graphics/drawable/Drawable;)V

    return-void
.end method
