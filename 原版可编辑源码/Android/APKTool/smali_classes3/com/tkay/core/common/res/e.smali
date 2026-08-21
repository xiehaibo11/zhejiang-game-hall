.class public final Lcom/tkay/core/common/res/e;
.super Ljava/lang/Object;


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field public static final c:I = 0x3

.field public static final d:I = 0x4


# instance fields
.field public e:I

.field public f:Ljava/lang/String;


# direct methods
.method public constructor <init>(ILjava/lang/String;)V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    iput p1, p0, Lcom/tkay/core/common/res/e;->e:I

    .line 19
    iput-object p2, p0, Lcom/tkay/core/common/res/e;->f:Ljava/lang/String;

    return-void
.end method
