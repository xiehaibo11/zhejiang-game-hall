.class public final Lcom/kwad/components/core/widget/e;
.super Ljava/lang/Object;


# static fields
.field public static final Za:I


# instance fields
.field private Zb:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "#FFFE3666"

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    sput v0, Lcom/kwad/components/core/widget/e;->Za:I

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget v0, Lcom/kwad/components/core/widget/e;->Za:I

    iput v0, p0, Lcom/kwad/components/core/widget/e;->Zb:I

    return-void
.end method


# virtual methods
.method public final sv()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/widget/e;->Zb:I

    return v0
.end method
