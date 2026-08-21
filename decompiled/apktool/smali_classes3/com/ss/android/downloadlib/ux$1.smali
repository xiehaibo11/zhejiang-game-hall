.class final Lcom/ss/android/downloadlib/ux$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic rg:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/ss/android/downloadlib/ux$1;->rg:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 76
    new-instance v0, Lcom/ss/android/downloadlib/ux;

    iget-object v1, p0, Lcom/ss/android/downloadlib/ux$1;->rg:Landroid/content/Context;

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/ss/android/downloadlib/ux;-><init>(Landroid/content/Context;Lcom/ss/android/downloadlib/ux$1;)V

    invoke-static {v0}, Lcom/ss/android/downloadlib/ux;->rg(Lcom/ss/android/downloadlib/ux;)Lcom/ss/android/downloadlib/ux;

    return-void
.end method
