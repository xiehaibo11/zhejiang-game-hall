.class public Lcom/kwad/sdk/api/core/fragment/KsSavedState;
.super Ljava/lang/Object;


# instance fields
.field final mSaveState:Landroid/support/v4/app/Fragment$SavedState;


# direct methods
.method public constructor <init>(Landroid/support/v4/app/Fragment$SavedState;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/api/core/fragment/KsSavedState;->mSaveState:Landroid/support/v4/app/Fragment$SavedState;

    return-void
.end method


# virtual methods
.method public getBase()Landroid/support/v4/app/Fragment$SavedState;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/fragment/KsSavedState;->mSaveState:Landroid/support/v4/app/Fragment$SavedState;

    return-object v0
.end method
