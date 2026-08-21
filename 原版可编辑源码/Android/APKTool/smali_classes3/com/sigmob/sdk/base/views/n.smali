.class public Lcom/sigmob/sdk/base/views/n;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/views/n$a;,
        Lcom/sigmob/sdk/base/views/n$b;
    }
.end annotation


# static fields
.field public static final a:I

.field public static final b:I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const/16 v0, 0x4d

    const/16 v1, 0x82

    const/16 v2, 0xef

    invoke-static {v0, v1, v2}, Landroid/graphics/Color;->rgb(III)I

    move-result v0

    sput v0, Lcom/sigmob/sdk/base/views/n;->a:I

    const/16 v0, 0x8c

    const/16 v1, 0x8d

    const/16 v2, 0x8e

    invoke-static {v0, v1, v2}, Landroid/graphics/Color;->rgb(III)I

    move-result v0

    sput v0, Lcom/sigmob/sdk/base/views/n;->b:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
