.class public Lcom/bianfeng/addpermission/ui/ShowPermissionDecoration;
.super Landroid/support/v7/widget/RecyclerView$ItemDecoration;
.source "ShowPermissionDecoration.java"


# instance fields
.field private mDrawable:Landroid/graphics/drawable/Drawable;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 16
    invoke-direct {p0}, Landroid/support/v7/widget/RecyclerView$ItemDecoration;-><init>()V

    .line 18
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const-string v1, "R.drawable.show_permission_decoration"

    invoke-static {p1, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {v0, p1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDecoration;->mDrawable:Landroid/graphics/drawable/Drawable;

    return-void
.end method

.method private drawHorizontal(Landroid/graphics/Canvas;Landroid/support/v7/widget/RecyclerView;)V
    .locals 2

    const/4 v0, 0x0

    .line 28
    :goto_0
    invoke-virtual {p2}, Landroid/support/v7/widget/RecyclerView;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 29
    invoke-virtual {p2, v0}, Landroid/support/v7/widget/RecyclerView;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    invoke-direct {p0, p1, v1}, Lcom/bianfeng/addpermission/ui/ShowPermissionDecoration;->drawHorizontalDecoration(Landroid/graphics/Canvas;Landroid/view/View;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private drawHorizontalDecoration(Landroid/graphics/Canvas;Landroid/view/View;)V
    .locals 3

    .line 33
    new-instance v0, Landroid/graphics/Rect;

    const/4 v1, 0x0

    invoke-direct {v0, v1, v1, v1, v1}, Landroid/graphics/Rect;-><init>(IIII)V

    .line 34
    invoke-virtual {p2}, Landroid/view/View;->getBottom()I

    move-result v1

    iput v1, v0, Landroid/graphics/Rect;->top:I

    .line 35
    iget v1, v0, Landroid/graphics/Rect;->top:I

    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDecoration;->mDrawable:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v2}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v2

    add-int/2addr v1, v2

    iput v1, v0, Landroid/graphics/Rect;->bottom:I

    .line 36
    invoke-virtual {p2}, Landroid/view/View;->getLeft()I

    move-result v1

    iput v1, v0, Landroid/graphics/Rect;->left:I

    .line 37
    invoke-virtual {p2}, Landroid/view/View;->getRight()I

    move-result p2

    iput p2, v0, Landroid/graphics/Rect;->right:I

    .line 38
    iget-object p2, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDecoration;->mDrawable:Landroid/graphics/drawable/Drawable;

    invoke-virtual {p2, v0}, Landroid/graphics/drawable/Drawable;->setBounds(Landroid/graphics/Rect;)V

    .line 39
    iget-object p2, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDecoration;->mDrawable:Landroid/graphics/drawable/Drawable;

    invoke-virtual {p2, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    return-void
.end method


# virtual methods
.method public getItemOffsets(Landroid/graphics/Rect;Landroid/view/View;Landroid/support/v7/widget/RecyclerView;Landroid/support/v7/widget/RecyclerView$State;)V
    .locals 0

    .line 43
    invoke-super {p0, p1, p2, p3, p4}, Landroid/support/v7/widget/RecyclerView$ItemDecoration;->getItemOffsets(Landroid/graphics/Rect;Landroid/view/View;Landroid/support/v7/widget/RecyclerView;Landroid/support/v7/widget/RecyclerView$State;)V

    .line 44
    iget-object p2, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDecoration;->mDrawable:Landroid/graphics/drawable/Drawable;

    invoke-virtual {p2}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result p2

    iput p2, p1, Landroid/graphics/Rect;->bottom:I

    return-void
.end method

.method public onDraw(Landroid/graphics/Canvas;Landroid/support/v7/widget/RecyclerView;Landroid/support/v7/widget/RecyclerView$State;)V
    .locals 0

    .line 24
    invoke-super {p0, p1, p2, p3}, Landroid/support/v7/widget/RecyclerView$ItemDecoration;->onDraw(Landroid/graphics/Canvas;Landroid/support/v7/widget/RecyclerView;Landroid/support/v7/widget/RecyclerView$State;)V

    .line 25
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/addpermission/ui/ShowPermissionDecoration;->drawHorizontal(Landroid/graphics/Canvas;Landroid/support/v7/widget/RecyclerView;)V

    return-void
.end method
