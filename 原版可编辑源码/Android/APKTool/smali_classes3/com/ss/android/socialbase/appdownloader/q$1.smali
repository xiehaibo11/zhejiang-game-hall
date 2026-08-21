.class final Lcom/ss/android/socialbase/appdownloader/q$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/appdownloader/q/rz;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/content/Context;IZ)I
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:I

.field final synthetic q:Z

.field final synthetic rg:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;IZ)V
    .locals 0

    .line 165
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/q$1;->rg:Landroid/content/Context;

    iput p2, p0, Lcom/ss/android/socialbase/appdownloader/q$1;->df:I

    iput-boolean p3, p0, Lcom/ss/android/socialbase/appdownloader/q$1;->q:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 3

    .line 168
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/q$1;->rg:Landroid/content/Context;

    iget v1, p0, Lcom/ss/android/socialbase/appdownloader/q$1;->df:I

    iget-boolean v2, p0, Lcom/ss/android/socialbase/appdownloader/q$1;->q:Z

    invoke-static {v0, v1, v2}, Lcom/ss/android/socialbase/appdownloader/q;->q(Landroid/content/Context;IZ)I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/q;->df(I)I

    return-void
.end method
