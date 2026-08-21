.class final Lcom/loc/ac$1;
.super Lcom/loc/cs;
.source "AAIDManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/ac;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/ac;


# direct methods
.method constructor <init>(Lcom/loc/ac;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ac$1;->a:Lcom/loc/ac;

    invoke-direct {p0}, Lcom/loc/cs;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    iget-object v0, p0, Lcom/loc/ac$1;->a:Lcom/loc/ac;

    invoke-static {v0}, Lcom/loc/ac;->a(Lcom/loc/ac;)V

    return-void
.end method
