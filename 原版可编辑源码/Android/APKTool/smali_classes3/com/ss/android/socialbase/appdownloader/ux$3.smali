.class Lcom/ss/android/socialbase/appdownloader/ux$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/appdownloader/ux;->q()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Ljava/lang/Integer;

.field final synthetic q:Lcom/ss/android/socialbase/appdownloader/ux;

.field final synthetic rg:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/appdownloader/ux;Landroid/content/Context;Ljava/lang/Integer;)V
    .locals 0

    .line 99
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/ux$3;->q:Lcom/ss/android/socialbase/appdownloader/ux;

    iput-object p2, p0, Lcom/ss/android/socialbase/appdownloader/ux$3;->rg:Landroid/content/Context;

    iput-object p3, p0, Lcom/ss/android/socialbase/appdownloader/ux$3;->df:Ljava/lang/Integer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 102
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux$3;->q:Lcom/ss/android/socialbase/appdownloader/ux;

    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/ux$3;->rg:Landroid/content/Context;

    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/ux$3;->df:Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    const/4 v3, 0x0

    invoke-static {v0, v1, v2, v3}, Lcom/ss/android/socialbase/appdownloader/ux;->rg(Lcom/ss/android/socialbase/appdownloader/ux;Landroid/content/Context;IZ)I

    return-void
.end method
