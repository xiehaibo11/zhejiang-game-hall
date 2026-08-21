.class public final Lcom/tkay/expressad/exoplayer/k/w;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/k/w$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field public static final c:I = 0x2


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(II)I
    .locals 5

    const/4 v0, 0x1

    move v1, v0

    :goto_0
    const/4 v2, 0x2

    if-gt v1, v2, :cond_5

    add-int v3, p0, v1

    .line 64
    rem-int/lit8 v3, v3, 0x3

    const/4 v4, 0x0

    if-eqz v3, :cond_2

    if-eq v3, v0, :cond_1

    if-eq v3, v2, :cond_0

    goto :goto_2

    :cond_0
    and-int/lit8 v2, p1, 0x2

    if-eqz v2, :cond_3

    goto :goto_1

    :cond_1
    and-int/lit8 v2, p1, 0x1

    if-eqz v2, :cond_3

    :cond_2
    :goto_1
    move v4, v0

    :cond_3
    :goto_2
    if-eqz v4, :cond_4

    return v3

    :cond_4
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_5
    return p0
.end method

.method private static b(II)Z
    .locals 3

    const/4 v0, 0x1

    if-eqz p0, :cond_4

    const/4 v1, 0x0

    if-eq p0, v0, :cond_2

    const/4 v2, 0x2

    if-eq p0, v2, :cond_0

    return v1

    :cond_0
    and-int/lit8 p0, p1, 0x2

    if-eqz p0, :cond_1

    return v0

    :cond_1
    return v1

    :cond_2
    and-int/lit8 p0, p1, 0x1

    if-eqz p0, :cond_3

    return v0

    :cond_3
    return v1

    :cond_4
    return v0
.end method
