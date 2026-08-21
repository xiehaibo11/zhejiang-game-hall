.class final Lcom/bytedance/pangle/g/o;
.super Ljava/lang/Object;


# static fields
.field public static final a:Lcom/bytedance/pangle/g/o;


# instance fields
.field public final b:[Landroid/content/pm/Signature;

.field public final c:I

.field public final d:Landroid/util/ArraySet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/ArraySet<",
            "Ljava/security/PublicKey;",
            ">;"
        }
    .end annotation
.end field

.field public final e:[Landroid/content/pm/Signature;

.field public final f:[I


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 172
    new-instance v6, Lcom/bytedance/pangle/g/o;

    const/4 v1, 0x0

    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/bytedance/pangle/g/o;-><init>([Landroid/content/pm/Signature;ILandroid/util/ArraySet;[Landroid/content/pm/Signature;[I)V

    sput-object v6, Lcom/bytedance/pangle/g/o;->a:Lcom/bytedance/pangle/g/o;

    return-void
.end method

.method public constructor <init>([Landroid/content/pm/Signature;)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x2

    .line 233
    invoke-direct {p0, p1, v1, v0, v0}, Lcom/bytedance/pangle/g/o;-><init>([Landroid/content/pm/Signature;I[Landroid/content/pm/Signature;[I)V

    return-void
.end method

.method public constructor <init>([Landroid/content/pm/Signature;ILandroid/util/ArraySet;[Landroid/content/pm/Signature;[I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Landroid/content/pm/Signature;",
            "I",
            "Landroid/util/ArraySet<",
            "Ljava/security/PublicKey;",
            ">;[",
            "Landroid/content/pm/Signature;",
            "[I)V"
        }
    .end annotation

    .line 219
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 220
    iput-object p1, p0, Lcom/bytedance/pangle/g/o;->b:[Landroid/content/pm/Signature;

    .line 221
    iput p2, p0, Lcom/bytedance/pangle/g/o;->c:I

    .line 222
    iput-object p3, p0, Lcom/bytedance/pangle/g/o;->d:Landroid/util/ArraySet;

    .line 223
    iput-object p4, p0, Lcom/bytedance/pangle/g/o;->e:[Landroid/content/pm/Signature;

    .line 224
    iput-object p5, p0, Lcom/bytedance/pangle/g/o;->f:[I

    return-void
.end method

.method public constructor <init>([Landroid/content/pm/Signature;I[Landroid/content/pm/Signature;[I)V
    .locals 6

    .line 229
    invoke-static {p1}, Lcom/bytedance/pangle/g/o;->a([Landroid/content/pm/Signature;)Landroid/util/ArraySet;

    move-result-object v3

    move-object v0, p0

    move-object v1, p1

    move v2, p2

    move-object v4, p3

    move-object v5, p4

    invoke-direct/range {v0 .. v5}, Lcom/bytedance/pangle/g/o;-><init>([Landroid/content/pm/Signature;ILandroid/util/ArraySet;[Landroid/content/pm/Signature;[I)V

    return-void
.end method

.method private static a([Landroid/content/pm/Signature;)Landroid/util/ArraySet;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Landroid/content/pm/Signature;",
            ")",
            "Landroid/util/ArraySet<",
            "Ljava/security/PublicKey;",
            ">;"
        }
    .end annotation

    .line 64
    new-instance v0, Landroid/util/ArraySet;

    array-length v1, p0

    invoke-direct {v0, v1}, Landroid/util/ArraySet;-><init>(I)V

    const/4 v1, 0x0

    move v2, v1

    .line 65
    :goto_0
    array-length v3, p0

    if-ge v2, v3, :cond_1

    .line 67
    const-class v3, Landroid/content/pm/Signature;

    new-array v4, v1, [Ljava/lang/Class;

    const-string v5, "getPublicKey"

    invoke-static {v3, v5, v4}, Lcom/bytedance/pangle/b/a/a;->a(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 68
    invoke-virtual {v3}, Ljava/lang/reflect/Method;->isAccessible()Z

    move-result v4

    if-eqz v4, :cond_0

    .line 70
    :try_start_0
    aget-object v4, p0, v2

    new-array v5, v1, [Ljava/lang/Object;

    invoke-virtual {v3, v4, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/security/PublicKey;

    .line 71
    invoke-virtual {v0, v3}, Landroid/util/ArraySet;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v3

    .line 77
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1

    :catch_1
    move-exception v3

    .line 75
    invoke-virtual {v3}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_1

    :catch_2
    move-exception v3

    .line 73
    invoke-virtual {v3}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    :cond_0
    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method public static a([B[B)Z
    .locals 4

    .line 138
    array-length v0, p0

    array-length v1, p1

    const/4 v2, 0x0

    if-eq v0, v1, :cond_0

    return v2

    :cond_0
    move v0, v2

    .line 141
    :goto_0
    array-length v1, p0

    if-ge v0, v1, :cond_2

    .line 142
    aget-byte v1, p0, v0

    aget-byte v3, p1, v0

    if-eq v1, v3, :cond_1

    return v2

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    const/4 p0, 0x1

    return p0
.end method

.method public static a([Landroid/content/pm/Signature;[Landroid/content/pm/Signature;)Z
    .locals 2

    .line 88
    array-length v0, p0

    array-length v1, p1

    if-ne v0, v1, :cond_0

    invoke-static {p0, p1}, Lcom/bytedance/pangle/util/d;->a([Ljava/lang/Object;[Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1, p0}, Lcom/bytedance/pangle/util/d;->a([Ljava/lang/Object;[Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    .line 273
    :cond_0
    instance-of v1, p1, Lcom/bytedance/pangle/g/o;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    .line 275
    :cond_1
    check-cast p1, Lcom/bytedance/pangle/g/o;

    .line 277
    iget v1, p0, Lcom/bytedance/pangle/g/o;->c:I

    iget v3, p1, Lcom/bytedance/pangle/g/o;->c:I

    if-eq v1, v3, :cond_2

    return v2

    .line 278
    :cond_2
    iget-object v1, p0, Lcom/bytedance/pangle/g/o;->b:[Landroid/content/pm/Signature;

    iget-object v3, p1, Lcom/bytedance/pangle/g/o;->b:[Landroid/content/pm/Signature;

    invoke-static {v1, v3}, Lcom/bytedance/pangle/g/o;->a([Landroid/content/pm/Signature;[Landroid/content/pm/Signature;)Z

    move-result v1

    if-nez v1, :cond_3

    return v2

    .line 279
    :cond_3
    iget-object v1, p0, Lcom/bytedance/pangle/g/o;->d:Landroid/util/ArraySet;

    if-eqz v1, :cond_4

    .line 280
    iget-object v3, p1, Lcom/bytedance/pangle/g/o;->d:Landroid/util/ArraySet;

    invoke-virtual {v1, v3}, Landroid/util/ArraySet;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_5

    return v2

    .line 283
    :cond_4
    iget-object v1, p1, Lcom/bytedance/pangle/g/o;->d:Landroid/util/ArraySet;

    if-eqz v1, :cond_5

    return v2

    .line 288
    :cond_5
    iget-object v1, p0, Lcom/bytedance/pangle/g/o;->e:[Landroid/content/pm/Signature;

    iget-object v3, p1, Lcom/bytedance/pangle/g/o;->e:[Landroid/content/pm/Signature;

    invoke-static {v1, v3}, Ljava/util/Arrays;->equals([Ljava/lang/Object;[Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_6

    return v2

    .line 291
    :cond_6
    iget-object v1, p0, Lcom/bytedance/pangle/g/o;->f:[I

    iget-object p1, p1, Lcom/bytedance/pangle/g/o;->f:[I

    invoke-static {v1, p1}, Ljava/util/Arrays;->equals([I[I)Z

    move-result p1

    if-nez p1, :cond_7

    return v2

    :cond_7
    return v0
.end method

.method public final hashCode()I
    .locals 2

    .line 300
    iget-object v0, p0, Lcom/bytedance/pangle/g/o;->b:[Landroid/content/pm/Signature;

    invoke-static {v0}, Ljava/util/Arrays;->hashCode([Ljava/lang/Object;)I

    move-result v0

    mul-int/lit8 v0, v0, 0x1f

    .line 301
    iget v1, p0, Lcom/bytedance/pangle/g/o;->c:I

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 302
    iget-object v1, p0, Lcom/bytedance/pangle/g/o;->d:Landroid/util/ArraySet;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Landroid/util/ArraySet;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 303
    iget-object v1, p0, Lcom/bytedance/pangle/g/o;->e:[Landroid/content/pm/Signature;

    invoke-static {v1}, Ljava/util/Arrays;->hashCode([Ljava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 304
    iget-object v1, p0, Lcom/bytedance/pangle/g/o;->f:[I

    invoke-static {v1}, Ljava/util/Arrays;->hashCode([I)I

    move-result v1

    add-int/2addr v0, v1

    return v0
.end method
