.class public Lcom/czhj/sdk/common/utils/ResourceUtil;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p1, p2, p0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getAnimId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "anim"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getArrayId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "array"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getAttrId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "attr"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getBoolId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "bool"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getColorId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "color"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getDimenId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "dimen"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getDrawableId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "drawable"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "id"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getIntegerId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "integer"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getLayoutId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "layout"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getMipmapId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "mipmap"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getStringId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "string"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getStyleId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    const-string v0, "style"

    invoke-static {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method
