.class Lcom/ss/android/socialbase/appdownloader/ux$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/appdownloader/ux;->rg(Landroid/content/Context;IZ)I
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:I

.field final synthetic pt:Lcom/ss/android/socialbase/appdownloader/ux;

.field final synthetic q:Z

.field final synthetic rg:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/appdownloader/ux;Landroid/content/Context;IZ)V
    .locals 0

    .line 137
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/ux$4;->pt:Lcom/ss/android/socialbase/appdownloader/ux;

    iput-object p2, p0, Lcom/ss/android/socialbase/appdownloader/ux$4;->rg:Landroid/content/Context;

    iput p3, p0, Lcom/ss/android/socialbase/appdownloader/ux$4;->df:I

    iput-boolean p4, p0, Lcom/ss/android/socialbase/appdownloader/ux$4;->q:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 140
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux$4;->pt:Lcom/ss/android/socialbase/appdownloader/ux;

    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/ux$4;->rg:Landroid/content/Context;

    iget v2, p0, Lcom/ss/android/socialbase/appdownloader/ux$4;->df:I

    iget-boolean v3, p0, Lcom/ss/android/socialbase/appdownloader/ux$4;->q:Z

    invoke-virtual {v0, v1, v2, v3}, Lcom/ss/android/socialbase/appdownloader/ux;->rg(Landroid/content/Context;IZ)I

    return-void
.end method
