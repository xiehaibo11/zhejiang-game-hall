.class public Lcom/tkay/basead/ui/AppRatingSmallSizeView;
.super Lcom/tkay/basead/ui/AppRatingView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 17
    invoke-direct {p0, p1, v0, v1}, Lcom/tkay/basead/ui/AppRatingSmallSizeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 21
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/basead/ui/AppRatingSmallSizeView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 25
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/ui/AppRatingView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/16 p1, 0xd

    .line 27
    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/AppRatingSmallSizeView;->setStarSizeInDp(I)V

    const/4 p1, 0x4

    .line 28
    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/AppRatingSmallSizeView;->setStarMargin(I)V

    return-void
.end method
