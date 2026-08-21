.class public final Lcom/tkay/expressad/exoplayer/d/o;
.super Ljava/lang/Exception;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/d/o$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2


# instance fields
.field public final c:I


# direct methods
.method private constructor <init>(I)V
    .locals 0

    .line 52
    invoke-direct {p0}, Ljava/lang/Exception;-><init>()V

    .line 53
    iput p1, p0, Lcom/tkay/expressad/exoplayer/d/o;->c:I

    return-void
.end method

.method public constructor <init>(Ljava/lang/Exception;)V
    .locals 0

    .line 61
    invoke-direct {p0, p1}, Ljava/lang/Exception;-><init>(Ljava/lang/Throwable;)V

    const/4 p1, 0x2

    .line 62
    iput p1, p0, Lcom/tkay/expressad/exoplayer/d/o;->c:I

    return-void
.end method
