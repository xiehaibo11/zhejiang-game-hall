.class public final Lcom/tkay/expressad/exoplayer/b/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/b/a$a$a;
    }
.end annotation


# static fields
.field public static final a:I = -0x1

.field public static final b:I = 0x0

.field public static final c:I = 0x1

.field public static final d:I = 0x2


# instance fields
.field public final e:Ljava/lang/String;

.field public final f:I

.field public final g:I

.field public final h:I

.field public final i:I

.field public final j:I


# direct methods
.method private constructor <init>(Ljava/lang/String;IIIII)V
    .locals 0

    .line 85
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 86
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/a$a;->e:Ljava/lang/String;

    .line 87
    iput p2, p0, Lcom/tkay/expressad/exoplayer/b/a$a;->f:I

    .line 88
    iput p3, p0, Lcom/tkay/expressad/exoplayer/b/a$a;->h:I

    .line 89
    iput p4, p0, Lcom/tkay/expressad/exoplayer/b/a$a;->g:I

    .line 90
    iput p5, p0, Lcom/tkay/expressad/exoplayer/b/a$a;->i:I

    .line 91
    iput p6, p0, Lcom/tkay/expressad/exoplayer/b/a$a;->j:I

    return-void
.end method

.method synthetic constructor <init>(Ljava/lang/String;IIIIIB)V
    .locals 0

    .line 37
    invoke-direct/range {p0 .. p6}, Lcom/tkay/expressad/exoplayer/b/a$a;-><init>(Ljava/lang/String;IIIII)V

    return-void
.end method
