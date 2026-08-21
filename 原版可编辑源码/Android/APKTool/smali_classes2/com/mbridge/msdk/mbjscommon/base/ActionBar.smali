.class public Lcom/mbridge/msdk/mbjscommon/base/ActionBar;
.super Landroid/widget/LinearLayout;
.source "ActionBar.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbjscommon/base/ActionBar$a;
    }
.end annotation


# instance fields
.field private a:Landroid/webkit/WebView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 37
    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method public addAction(Lcom/mbridge/msdk/mbjscommon/base/ActionBar$a;)V
    .locals 1

    .line 63
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->getChildCount()I

    move-result v0

    .line 64
    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->addAction(Lcom/mbridge/msdk/mbjscommon/base/ActionBar$a;I)V

    return-void
.end method

.method public addAction(Lcom/mbridge/msdk/mbjscommon/base/ActionBar$a;I)V
    .locals 4

    .line 1138
    invoke-interface {p1}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar$a;->a()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1140
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->newActionItem()Landroid/view/View;

    move-result-object v1

    .line 1141
    move-object v2, v1

    check-cast v2, Landroid/view/ViewGroup;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    .line 1142
    invoke-virtual {v2, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    .line 1143
    invoke-virtual {v0, p1}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    .line 1144
    invoke-virtual {v0, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 74
    :goto_0
    invoke-virtual {p0, v1, p2}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->addView(Landroid/view/View;I)V

    return-void
.end method

.method public getActionCount()I
    .locals 1

    .line 127
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->getChildCount()I

    move-result v0

    return v0
.end method

.method public getWebView()Landroid/webkit/WebView;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->a:Landroid/webkit/WebView;

    return-object v0
.end method

.method public newActionItem()Landroid/view/View;
    .locals 5

    .line 162
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 163
    new-instance v1, Landroid/widget/LinearLayout;

    invoke-direct {v1, v0}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 164
    new-instance v2, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v3, -0x1

    const/4 v4, -0x2

    invoke-direct {v2, v4, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    const/high16 v4, 0x3f800000    # 1.0f

    .line 165
    iput v4, v2, Landroid/widget/LinearLayout$LayoutParams;->weight:F

    .line 166
    invoke-virtual {v1, v2}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 167
    new-instance v2, Landroid/widget/FrameLayout;

    invoke-direct {v2, v0}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    .line 168
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v0, v3, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    const/16 v3, 0x11

    .line 169
    iput v3, v0, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 170
    invoke-virtual {v2, v0}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 171
    invoke-virtual {v1, v2}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    return-object v1
.end method

.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 42
    invoke-virtual {p1}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v0

    .line 43
    instance-of v1, v0, Lcom/mbridge/msdk/mbjscommon/base/ActionBar$a;

    if-eqz v1, :cond_0

    .line 44
    check-cast v0, Lcom/mbridge/msdk/mbjscommon/base/ActionBar$a;

    .line 45
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->a:Landroid/webkit/WebView;

    invoke-interface {v0, p1, v1}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar$a;->a(Landroid/view/View;Landroid/webkit/WebView;)V

    :cond_0
    return-void
.end method

.method public removeAction(Lcom/mbridge/msdk/mbjscommon/base/ActionBar$a;)Z
    .locals 6

    .line 106
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->getChildCount()I

    move-result v0

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_1

    .line 108
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->getChildAt(I)Landroid/view/View;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 110
    invoke-virtual {v3}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v4

    .line 111
    instance-of v5, v4, Lcom/mbridge/msdk/mbjscommon/base/ActionBar$a;

    if-eqz v5, :cond_0

    invoke-virtual {v4, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 112
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->removeView(Landroid/view/View;)V

    const/4 p1, 0x1

    return p1

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return v1
.end method

.method public removeActionAt(I)V
    .locals 1

    if-ltz p1, :cond_0

    .line 91
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->getChildCount()I

    move-result v0

    if-ge p1, v0, :cond_0

    .line 92
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->removeViewAt(I)V

    :cond_0
    return-void
.end method

.method public removeAllActions()V
    .locals 0

    .line 82
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->removeAllViews()V

    return-void
.end method

.method public setWebView(Landroid/webkit/WebView;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/base/ActionBar;->a:Landroid/webkit/WebView;

    return-void
.end method
