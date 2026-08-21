.class public abstract Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;
.super Lcom/tkay/core/api/TYBaseAdAdapter;


# instance fields
.field protected mRequestNum:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 14
    invoke-direct {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;-><init>()V

    const/4 v0, 0x1

    .line 16
    iput v0, p0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;->mRequestNum:I

    return-void
.end method


# virtual methods
.method public final isAdReady()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public setRequestNum(I)V
    .locals 0

    if-lez p1, :cond_0

    .line 26
    iput p1, p0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;->mRequestNum:I

    :cond_0
    return-void
.end method
