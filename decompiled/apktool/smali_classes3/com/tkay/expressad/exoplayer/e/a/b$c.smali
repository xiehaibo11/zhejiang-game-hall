.class final Lcom/tkay/expressad/exoplayer/e/a/b$c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/e/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "c"
.end annotation


# static fields
.field public static final a:I = 0x8


# instance fields
.field public final b:[Lcom/tkay/expressad/exoplayer/e/a/k;

.field public c:Lcom/tkay/expressad/exoplayer/m;

.field public d:I

.field public e:I


# direct methods
.method public constructor <init>(I)V
    .locals 0

    .line 1290
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1291
    new-array p1, p1, [Lcom/tkay/expressad/exoplayer/e/a/k;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/b$c;->b:[Lcom/tkay/expressad/exoplayer/e/a/k;

    const/4 p1, 0x0

    .line 1292
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/a/b$c;->e:I

    return-void
.end method
